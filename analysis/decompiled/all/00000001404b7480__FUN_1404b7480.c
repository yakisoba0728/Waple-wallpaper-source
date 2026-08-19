// Function: FUN_1404b7480
// Addr: 1404b7480
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7480(byte *param_1,uint *param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined8 in_RAX;
  longlong lVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  undefined8 *puVar6;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 uStack_10;
  
  lVar5 = CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX - *(char *)(unaff_RDI + 0x1d));
  pcVar1 = (char *)(lVar5 + 0x21004b73);
  *pcVar1 = *pcVar1 + (char)param_2;
  uVar4 = (uint)lVar5;
  *param_2 = *param_2 | uVar4;
  bVar2 = *param_1;
  *param_1 = *param_1 + (byte)param_1;
  puVar6 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar3 = '\t';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar6 = puVar6 + -1;
    *puVar6 = *unaff_RBP;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x921004b + unaff_RSI * 2);
  *pcVar1 = *pcVar1 + (char)((uVar4 + 0xe2b8cd00) - (uint)CARRY1(bVar2,(byte)param_1) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

