// Function: FUN_1404c88f8
// Addr: 1404c88f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c88f8(byte *param_1,longlong param_2)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  undefined8 in_RAX;
  undefined7 uVar5;
  char *pcVar4;
  byte unaff_BL;
  char in_CF;
  
  uVar5 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar3 = (char)in_RAX + '+' + in_CF;
  bVar2 = *param_1;
  *param_1 = *param_1 + unaff_BL;
  pcVar4 = (char *)(CONCAT71(uVar5,bVar3) * 2);
  *pcVar4 = (*pcVar4 - bVar3) - CARRY1(bVar2,unaff_BL);
  puVar1 = (uint *)(param_2 + 5);
  *puVar1 = *puVar1 | (uint)param_2;
  param_1 = param_1 + -1;
  if (param_1 == (byte *)0x0 || *puVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = bVar3 & (byte)param_2;
  pcVar4 = (char *)CONCAT71(uVar5,bVar3);
  *pcVar4 = *pcVar4 + (char)((ulonglong)param_1 >> 8);
  *pcVar4 = *pcVar4 + bVar3;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

