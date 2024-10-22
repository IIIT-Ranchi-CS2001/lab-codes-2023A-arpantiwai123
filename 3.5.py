def is_all_alphanumeric(input_string):
    # """
    # Checks if all characters in the input string are alphanumeric.

    # Args:
    #     input_string (str): The input string to check.

    # Returns:
    #     bool: True if all characters are alphanumeric, False otherwise.
    # """
    return input_string.isalnum()

# Example usage:
user_input = input("Enter a string: ")
if is_all_alphanumeric(user_input):
    print("All characters are alphanumeric.")
else:
    print("Not all characters are alphanumeric.")
