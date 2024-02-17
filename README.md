# Email_Verification
# Email Validation Program

This C++ program checks whether a given email address is valid or not based on certain criteria.

## Usage

1. Compile the program:
    ```bash
    g++ -o email_validation email_validation.cpp
    ```

2. Run the program:
    ```bash
    ./email_validation
    ```

3. Enter the email address when prompted.

4. The program will output whether the email is valid or invalid.

## Algorithm

1. Read the email address from the user.
2. Check if the first character of the email is a digit. If so, it's invalid.
3. Iterate through the characters of the email address:
   - Find the position of the '@' character.
   - Find the position of the last '.' character.
   - Count the number of special characters (non-alphanumeric characters) in the email.
4. Check if the email meets the following criteria:
   - '@' character exists and occurs only once.
   - '.' character exists after '@' and occurs only once.
   - No special characters in the email.
   - The first character is not a digit.
5. Print whether the email is valid or invalid based on the criteria.

## Criteria for Valid Email

- '@' character exists and occurs only once.
- '.' character exists after '@' and occurs only once.
- No special characters in the email.
- The first character is not a digit.

## Example

```bash
Enter the email address: example@email.com
valid email
