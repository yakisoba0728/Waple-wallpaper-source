// Function: FUN_1404b4944
// Addr: 1404b4944
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4944(uint param_1,undefined2 param_2)

{
  uint uVar1;
  uint uVar2;
  uint *in_RAX;
  uint unaff_EBX;
  uint *unaff_RDI;
  byte in_CF;
  bool in_SF;
  
  if (in_SF) {
    uVar1 = *in_RAX;
    uVar2 = *in_RAX - (uint)in_RAX;
    *in_RAX = uVar2 - in_CF;
    out(param_2,(char)unaff_EBX);
    *(int *)(ulonglong)unaff_EBX =
         (*(int *)(ulonglong)unaff_EBX - unaff_EBX) - (uint)(uVar1 < (uint)in_RAX || uVar2 < in_CF);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

