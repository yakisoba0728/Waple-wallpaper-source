// Function: FUN_1404acbc0
// Addr: 1404acbc0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acbc0(uint *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar3;
  int *in_RAX;
  int *unaff_RDI;
  byte in_CF;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar3 = (uint)in_RAX;
  uVar2 = *param_1;
  *param_1 = uVar2 + uVar3 + (uint)in_CF;
  *in_RAX = *in_RAX + uVar3 + (uint)(CARRY4(uVar1,uVar3) || CARRY4(uVar2 + uVar3,(uint)in_CF));
  *param_2 = *param_2 ^ (char)in_RAX + 0x70U;
  *unaff_RDI = *unaff_RDI + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

