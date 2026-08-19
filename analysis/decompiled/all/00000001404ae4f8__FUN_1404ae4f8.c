// Function: FUN_1404ae4f8
// Addr: 1404ae4f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae4f8(char param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  char unaff_BH;
  char *unaff_RSI;
  char in_CF;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  *unaff_RSI = (*unaff_RSI - unaff_BH) - in_CF;
  lVar2 = func_0x0001614b2fe4();
  *(char *)(lVar2 * 2) = *(char *)(lVar2 * 2) + param_1;
  uVar1 = (int)CONCAT62((int6)((ulonglong)lVar2 >> 0x10),
                        CONCAT11(((char)((ulonglong)lVar2 >> 8) + cVar3) * '\x02',(char)lVar2)) +
          0x6d40000;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

