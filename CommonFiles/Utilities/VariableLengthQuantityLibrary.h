#ifndef VARIABLE_LENGTH_QUANTITY_LIBRARY_H
#define VARIABLE_LENGTH_QUANTITY_LIBRARY_H

class VariableLengthQuantityConverter
{
	public:
		VariableLengthQuantityConverter();
		unsigned long int convertVariableLengthQuantityToUnsignedLongInt(const unsigned char* messageDataStartingAtVariableLengthQuantityValue);
		unsigned short int getVariableLengthQuantityByteLengthOfLastConversionFromVLQToUnsignedLongInt();
		unsigned char* convertUnsignedLongIntToVariableLengthQuantity(unsigned long int valueToTurnIntoVariableLengthQuantity);
		unsigned short int getArrayLengthFromLastConversionFromUnsignedLongIntToVLQ();
	protected:

	private:
		unsigned short int variableLengthQuantityByteLengthOfLastConversion;
		unsigned short int arrayLenthOfVLQValueFromLastConversion;
};


#endif
