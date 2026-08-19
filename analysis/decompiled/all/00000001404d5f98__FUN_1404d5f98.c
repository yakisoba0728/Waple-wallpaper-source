// Function: FUN_1404d5f98
// Addr: 1404d5f98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5f98(char *param_1,undefined8 param_2,char param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong in_RAX;
  char *pcVar3;
  char cVar4;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  longlong unaff_retaddr;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RSI + in_RAX) = *(char *)(unaff_RSI + in_RAX) + cVar4;
  pcVar3 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX * '\x02' + cVar4);
  *pcVar3 = *pcVar3 + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + param_3;
  pbVar1 = (byte *)(unaff_retaddr + -0x2c);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)unaff_retaddr;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BH;
  param_1[(ulonglong)
          ((((uint)pcVar3 | 0x15e45d00) + 0xe38bb900) - (uint)CARRY1(bVar2,(byte)unaff_retaddr)) ^
          0x1b] =
       param_1[(ulonglong)
               ((((uint)pcVar3 | 0x15e45d00) + 0xe38bb900) - (uint)CARRY1(bVar2,(byte)unaff_retaddr)
               ) ^ 0x1b] + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

