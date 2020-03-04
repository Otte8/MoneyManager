package Exceptions;

public class TransactionCSVWrongFormatException extends RuntimeException
{
    public TransactionCSVWrongFormatException()
    {
        super("Transaction CSV file is in the wrong format");
    }
}
