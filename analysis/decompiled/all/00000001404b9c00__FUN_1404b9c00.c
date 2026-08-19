// Function: FUN_1404b9c00
// Addr: 1404b9c00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9c00(longlong param_1,undefined1 *param_2,undefined8 param_3,byte *param_4)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  undefined8 in_RAX;
  char cVar4;
  undefined7 uVar5;
  char unaff_BL;
  longlong unaff_RSI;
  
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  cVar4 = (char)param_2;
  bVar2 = (byte)in_RAX ^ 0xe6;
  bVar3 = *param_4;
  *param_4 = *param_4 + bVar2;
  bVar3 = bVar2 + 3 + CARRY1(bVar3,bVar2);
  pcVar1 = (char *)(param_1 + CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3));
  *pcVar1 = *pcVar1 + cVar4;
  LOCK();
  *param_2 = (char)((ulonglong)in_RAX >> 8);
  UNLOCK();
  *(char *)(unaff_RSI + 0x7a0012f8) = *(char *)(unaff_RSI + 0x7a0012f8) + (bVar3 | 0x60);
  func_0x000118bd9c31();
  pcVar1 = (char *)(CONCAT71(uVar5,cVar4) + -0x58);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

