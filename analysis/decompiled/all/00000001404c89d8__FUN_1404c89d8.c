// Function: FUN_1404c89d8
// Addr: 1404c89d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c89d8(int *param_1,int *param_2)

{
  uint *puVar1;
  uint *in_RAX;
  ulonglong uVar2;
  uint unaff_ESP;
  uint unaff_ESI;
  byte in_CF;
  
  *param_2 = (*param_2 - unaff_ESI) - (uint)in_CF;
  uVar2 = (ulonglong)((uint)in_RAX | *in_RAX);
  puVar1 = (uint *)((longlong)param_1 + uVar2 + 1);
  *puVar1 = *puVar1 & unaff_ESP;
  puVar1 = (uint *)(uVar2 * 2);
  *puVar1 = *puVar1 & unaff_ESI;
  *param_1 = *param_1 + unaff_ESP;
  *(char *)param_2 = (char)*param_2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

