// Function: FUN_1404c34b4
// Addr: 1404c34b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c34b4(int *param_1)

{
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  int unaff_ESP;
  int *unaff_RDI;
  byte in_CF;
  
  *unaff_RDI = (*unaff_RDI - unaff_ESP) - (uint)in_CF;
  *param_1 = *param_1 -
             CONCAT31((int3)((uint)in_EAX >> 8),
                      (byte)in_EAX | *(byte *)CONCAT44(in_register_00000004,in_EAX));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

