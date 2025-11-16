# Utility & Helper Functions (With Descriptions)

## 1. Input Validation Utilities

- **bool IsValidEmail(string email)**  
  Checks if the email has a basic valid structure, like `"name@example.com"`.

- **bool IsValidPassword(string password)**  
  Checks if password meets simple rules (example: minimum length, contains numbers, etc.).

- **bool IsNumeric(string input)**  
  Returns true if the entire string contains only digits.

- **bool IsAlpha(string input)**  
  Returns true if the string has only letters (no numbers or symbols).

- **bool IsWithinRange(int value, int min, int max)**  
  Checks if a number is between two limits (inclusive).


## 2. String Helpers

- **string CapitalizeFirstLetter(string input)**  
  Makes the first character uppercase and keeps the rest the same.

- **string ToTitleCase(string input)**  
  Converts each word’s first letter to uppercase.

- **string ReverseString(string input)**  
  Returns the string reversed (e.g., “hello” → “olleh”).

- **string RemoveExtraSpaces(string input)**  
  Removes repeated spaces and trims leading/trailing spaces.

- **string Truncate(string input, int maxLength)**  
  Shortens the string if it's longer than a maximum length.


## 3. Math & Number Helpers

- **bool IsPrime(int number)**  
  Checks if a number is prime (only divisible by 1 and itself).

- **int GetFactorial(int number)**  
  Returns the factorial of a number (e.g., 5! = 5×4×3×2×1).

- **double Average(int numbers[])**  
  Calculates the average of a list of integers.


## 4. Console Helpers

- **int GetIntFromUser(string prompt)**  
  Shows a message and keeps asking until the user types a valid integer.

- **string GetStringFromUser(string prompt)**  
  Prompts the user and returns whatever they type.

- **bool GetYesNo(string prompt)**  
  Asks a question like “Continue? (y/n)” and returns true/false.


## 6. Random Helpers

- **int GetRandomInt(int min, int max)**  
  Returns a random number between min and max.

- **string GetRandomString(int length)**  
  Generates a random string using letters and numbers.

- **string PickRandomFromList(List<string> items)**  
  Returns a random item from a list of strings.


## 7. Date & Time Helpers

- **bool IsValidDate(string input)**  
  Returns true if the text can be interpreted as a valid date.

- **string FormatDate(DateTime date)**  
  Converts a date into a formatted string (e.g., "2025-02-10").

- **bool IsWeekend(DateTime date)**  
  Checks if a given date falls on Saturday or Sunday.


## 8. Common Object Helpers

- **bool IsNullOrEmpty(string input)**  
  Returns true if the string is empty or not provided.
