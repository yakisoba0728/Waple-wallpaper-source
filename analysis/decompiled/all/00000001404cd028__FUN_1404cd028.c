// Function: FUN_1404cd028
// Addr: 1404cd028
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd028(char *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar3;
  char *in_RAX;
  char *pcVar2;
  byte *pbVar4;
  byte *unaff_RSI;
  char unaff_R12B;
  
  pbVar4 = (byte *)CONCAT71((int7)((ulonglong)param_2 >> 8),(char)param_2 + *in_RAX);
  cVar3 = (char)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX + cVar3;
  *unaff_RSI = *unaff_RSI >> 1;
  bVar1 = (char)in_RAX * '\x02';
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  *pcVar2 = *pcVar2 + bVar1;
  *param_1 = *param_1 + cVar3;
  *pbVar4 = *pbVar4 | bVar1;
  *pcVar2 = *pcVar2 + (char)param_1;
  in(0x1a);
  *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

