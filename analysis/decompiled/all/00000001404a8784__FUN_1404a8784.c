// Function: FUN_1404a8784
// Addr: 1404a8784
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8784(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  longlong in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  
  param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0xb843700] =
       param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0xb843700] ^ (byte)in_RAX;
  pcVar1 = (char *)(unaff_RSI + 0x4a + in_RAX * 4);
  *pcVar1 = *pcVar1 + unaff_BH;
  cVar3 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar3;
  *(char *)(in_RAX * 2) = *(char *)(in_RAX * 2) + (char)param_1;
  uVar2 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((cVar3 + (char)((ulonglong)param_2 >> 8)) * '\x02',(byte)in_RAX)) +
          0x6d40000;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

