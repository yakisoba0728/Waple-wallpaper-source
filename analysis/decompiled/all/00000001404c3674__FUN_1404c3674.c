// Function: FUN_1404c3674
// Addr: 1404c3674
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3674(int *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte *in_RAX;
  uint uVar3;
  int unaff_ESI;
  undefined1 *unaff_RDI;
  
  uVar3 = (uint)param_2;
  *param_1 = *param_1 + uVar3;
  *in_RAX = *in_RAX | (byte)in_RAX;
  puVar1 = (uint *)(&stack0x00000000 + (longlong)param_1);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *param_2 = *param_2 + unaff_ESI + (uint)CARRY4(uVar2,uVar3);
  *unaff_RDI = *unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

