package Exceptions;

public class NoAccountWithThatNameException extends RuntimeException
{
    public NoAccountWithThatNameException()
    {
        super("No account with the name in the Transaction");
    }
}
