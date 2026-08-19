// Function: FUN_1404c83c8
// Addr: 1404c83c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c83c8(int *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  byte in_AL;
  byte bVar3;
  char unaff_SPL;
  undefined7 unaff_00000021;
  int unaff_ESI;
  undefined4 unaff_00000034;
  
  bVar3 = (in_AL | 0xc4) ^ 0xe;
  *(char *)param_1 = (char)*param_1 + (char)((ulonglong)param_2 >> 8) + CARRY1(bVar3,(byte)param_2);
  bVar2 = *(byte *)CONCAT44(unaff_00000034,unaff_ESI);
  *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) + (byte)param_1;
  *param_1 = *param_1 + unaff_ESI + (uint)CARRY1(bVar2,(byte)param_1);
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + param_2 * 8);
  *pcVar1 = *pcVar1 + bVar3 + (byte)param_2;
  *(char *)param_1 = (char)*param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

