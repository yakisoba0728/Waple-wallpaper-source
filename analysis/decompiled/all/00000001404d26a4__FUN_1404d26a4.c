// Function: FUN_1404d26a4
// Addr: 1404d26a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d26a4(int *param_1,longlong param_2)

{
  char cVar1;
  undefined8 in_RAX;
  int *piVar2;
  
  cVar1 = (char)in_RAX + '\x02';
  piVar2 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
  *(char *)piVar2 = (char)*piVar2 + cVar1;
  *param_1 = *param_1 + (int)param_1;
  *piVar2 = *piVar2 + (uint)piVar2;
  *(uint *)(param_2 + 0xd010000) = *(uint *)(param_2 + 0xd010000) | (uint)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

