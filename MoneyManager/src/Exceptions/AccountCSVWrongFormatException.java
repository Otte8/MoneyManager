package Exceptions;

public class AccountCSVWrongFormatException extends RuntimeException
{
    public AccountCSVWrongFormatException()
    {
        super("Account CSV file is in the wrong format");
    }
}
