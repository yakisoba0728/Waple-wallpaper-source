// Function: FUN_1404a8f90
// Addr: 1404a8f90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8f90(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char cVar3;
  longlong unaff_RBP;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + unaff_RBP);
  *pcVar1 = *pcVar1 + cVar3;
  bVar2 = bRam38000c25f0000c24;
  *(int *)CONCAT71(in_register_00000001,bRam38000c25f0000c24) =
       *(int *)CONCAT71(in_register_00000001,bRam38000c25f0000c24) + (int)param_2;
  *(char *)(param_2 + 0x1c21700c) =
       *(char *)(param_2 + 0x1c21700c) + cVar3 +
       CARRY1(bVar2,*(byte *)CONCAT71(in_register_00000001,bVar2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

