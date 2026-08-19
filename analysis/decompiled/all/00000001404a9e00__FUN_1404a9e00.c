// Function: FUN_1404a9e00
// Addr: 1404a9e00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a9e19) */
/* WARNING: Removing unreachable block (ram,0x0001404a9e4f) */
/* WARNING: Removing unreachable block (ram,0x0001404a9e57) */

void FUN_1404a9e00(uint param_1)

{
  char cVar1;
  undefined8 in_RAX;
  bool bVar3;
  int *piVar2;
  
  cVar1 = (char)in_RAX + -0x7e;
  piVar2 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
  *(char *)piVar2 = (char)*piVar2 + cVar1;
  bVar3 = CARRY4(uRam0000000194579e10,param_1);
  uRam0000000194579e10 = uRam0000000194579e10 + param_1;
  *piVar2 = *piVar2 + (int)piVar2 + (uint)bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

