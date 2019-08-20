#ifndef		JUD_H
#define		JUD_H
#include "myhead.h"

short isPunctuation(wchar word)
{   
    if(  word == 0x0020  ||  //�ո�
		word == 0x3000   || //ȫ�ǿո�
		word == 0x002E   ||//.
		word == 0xFF0C   || // ��
		word == 0x3002   ||  // ��
		word == 0x003F   || // ��
		word == 0x0021   || // ��
		word == 0x201C   || //"  ��˫����
		word == 0x201D   || //"	��˫����
		word == 0x2026   ||  // ����
		word == 0xFF1F   ||   //��
		word == 0xFF01   ||  //	��
		word == 0x3001   ||      // ��
		word == 0x000A   ||      //�س�
		word == 0x000D   ||      //����
		word == 0x0D0A   ||   // ���лس�
		word == 0x0A0D   ||   //�س�����
		word == 0xFF1B   ||    //��
		word == 0xFF1A   ||        //��
		word == 0x0009   ||  // �Ʊ��
		word == 0x002C   ||          // ,
		word == 0x002D   ||  // -
		word == 0x2014   || // ��
		word == 0xFF08   || // (
		word == 0xFF09   || //)
		word == 0x0029   || //)
		word == 0x0028    //(
		)
		return 1;
	
	
	return 0;

}
short isNum(wchar word)
{
	if( word == 0x96F6 ||  //��
		word == 0x58F9 ||  //Ҽ
		word == 0x8D30 ||	  //��
		word == 0x53C1 ||
		word == 0x8086 ||
		word == 0x4F0D ||
		word == 0xC2BD || 
		word == 0x67D2 ||
		word == 0x634C ||
		word == 0x7396 ||   //��
		word == 0x62FE || //ʰ
		word == 0x4F70 || //��
		word == 0x4EDF || //Ǫ
		word == 0x842C  //�f
		)
		return 1;
	return 0;
}
short isnum(wchar word)
{
	if(0x002F  < word  && word < 0x003A) return 1;
	if(	word == 0x96F6 ||   //��
		word == 0x4E00 ||	   //һ
		word == 0x4E8C ||   //��
		word == 0x4E09 ||   //��
		word == 0x56DB ||
		word == 0x4E94 ||
		word == 0x516D || 
		word == 0x4E03 ||
		word == 0x516B ||
		word == 0x4E5D ||    //��
		word == 0x4E07 ||     //��
		word == 0x5343 ||    //ǧ
		word == 0x767E ||    //��
		word == 0x5341     // ʮ
		)  
		return 1;
	return 0;

}
short isChar(wchar word)
{
	if(0x0060 < word && word < 0x007B) 	return 1;  // a~~z
	if(0x0040 < word && word < 0x005B) return 1;  // A~~Z

	return 0;
}


#endif