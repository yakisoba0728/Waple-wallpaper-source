// Function: FUN_1404a0518
// Addr: 1404a0518
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0518(longlong param_1,longlong param_2)

{
  longlong in_RAX;
  uint *puVar1;
  int *piVar2;
  char cVar3;
  longlong unaff_RBX;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)((ulonglong)in_RAX >> 8);
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + (char)param_2;
  *(char *)(in_RAX + param_2) = *(char *)(in_RAX + param_2) + cVar3;
  puVar1 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + cVar3);
  piVar2 = (int *)(ulonglong)
                  (((uint)puVar1 + *puVar1 + 0x3fffcc9) - (uint)CARRY4((uint)puVar1,*puVar1));
  *piVar2 = *piVar2 + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

