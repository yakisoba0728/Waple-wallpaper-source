// Function: FUN_1404d1b7c
// Addr: 1404d1b7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1b7c(longlong param_1,char *param_2)

{
  int *piVar1;
  longlong in_RAX;
  uint *puVar2;
  ulonglong uVar3;
  int unaff_EBX;
  int unaff_EBP;
  char unaff_DIL;
  undefined7 unaff_00000039;
  bool bVar4;
  
  *(char *)(in_RAX + 0x1004abf) = *(char *)(in_RAX + 0x1004abf) + unaff_DIL;
  puVar2 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0xe);
  *(char *)(puVar2 + param_1) = (char)puVar2[param_1] + (char)((ulonglong)param_1 >> 8);
  uVar3 = (ulonglong)((uint)puVar2 | *puVar2) & 0xffffffffffffff78;
  piVar1 = (int *)(uVar3 + 0xd);
  *piVar1 = *piVar1 - unaff_EBP;
  *param_2 = *param_2 + (char)param_2;
  bVar4 = SCARRY4(iRam000000014a3d269b,unaff_EBX);
  iRam000000014a3d269b = iRam000000014a3d269b + unaff_EBX;
  if (param_1 != 1 && iRam000000014a3d269b != 0) {
    *(int *)CONCAT71(unaff_00000039,unaff_DIL) =
         *(int *)CONCAT71(unaff_00000039,unaff_DIL) + (int)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!bVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

