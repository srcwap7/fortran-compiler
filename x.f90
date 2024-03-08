!description of the program !second inline comment
!how are you?
SUBROUTINE GenerateFibonacci(n)
    INTEGER, INTENT(IN) :: n
    INTEGER :: i, a, b, c

    ! Initialize the first two terms of the series
    a = 0
    b = 1

    ! Generate and print the Fibonacci series using DO loop
    PRINT*, 'Fibonacci series:'
    DO i = 1, n
      PRINT*, a
      c = a + b
      a = b
      b = c
    END DO
  END SUBROUTINE GenerateFibonacci

  ! Function to calculate the sum of the Fibonacci series
  FUNCTION SumFibonacci(n) RESULT(sum)
    INTEGER, INTENT(IN) :: n
    INTEGER :: i, a, b, c

    ! Initialize the first two terms of the series
    a = 0
    b = 1
    sum = 0

    ! Calculate the sum of the Fibonacci series using DO loop
    DO i = 1, n
      sum = sum + a
      c = a + b
      a = b !THIS IS AN INLINE COMMENT !THIS IS A SECOND INLINE COMMENT
      b = c
    END DO
  END FUNCTION SumFibonacci

  ! Function to check if a number is even
  FUNCTION IsEven(num) RESULT(even)
    INTEGER, INTENT(IN) :: num
    LOGICAL :: even

    even = MOD(num, 2) == 0
  END FUNCTION IsEven

PROGRAM ControlFlowExample
  INTEGER :: n

  ! Read the number of terms in the Fibonacci series
  PRINT*, 'Enter the number of Fibonacci terms:'

  ! Call the subroutine to generate and print the Fibonacci series
  CALL GenerateFibonacci(n)

  ! Call the function to check if the sum is even or odd
  IF (IsEven(SumFibonacci(n))) THEN
    PRINT*, 'Sum is an even number.'
  ELSE
    PRINT*, 'Sum is an odd number.'
  END IF
  
  INTEGER :: i

  DO i = 1, 10
    IF (MOD(i, 2) == 0) THEN
      PRINT *, 'Skipping even value i =', i
      CYCLE  ! Skip the rest of the loop body for even values of i
    END IF

    PRINT *, 'i =', i
  END DO
  
  !nested loops
   INTEGER :: i

  ! Labeled DO loop
  OUTER_LOOP: DO i = 1, 3
    INNER_LOOP: DO j = 1, 3
      PRINT *, 'i=', i, ' j=', j

      IF (j == 2) THEN
        EXIT OUTER_LOOP  ! Exit the outer loop when j is 2
      END IF
    END DO INNER_LOOP
  END DO OUTER_LOOP
  
  SELECT CASE (day)
    CASE (1)
      PRINT *, "Sunday"
    CASE (2)
      PRINT *, "Monday"
    CASE (3)
      PRINT *, "Tuesday"
    CASE (4)
      PRINT *, "Wednesday"
    CASE (5)
      PRINT *, "Thursday"
    CASE (6)
      PRINT *, "Friday"
    CASE (7)
      PRINT *, "Saturday"
    CASE DEFAULT
      PRINT *, "Invalid day number"
  END SELECT
END PROGRAM ControlFlowExample

