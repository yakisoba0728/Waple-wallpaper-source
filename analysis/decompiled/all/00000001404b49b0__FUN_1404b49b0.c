// Function: FUN_1404b49b0
// Addr: 1404b49b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b49b0(byte param_1)

{
  byte bVar1;
  byte bVar2;
  byte in_AH;
  byte *unaff_RBX;
  int unaff_ESP;
  byte *unaff_RDI;
  
  *(int *)unaff_RBX = *(int *)unaff_RBX + unaff_ESP;
  bVar1 = *unaff_RBX;
  *unaff_RBX = *unaff_RBX + in_AH;
  bVar2 = (param_1 & 0x1f) % 9;
  *unaff_RDI = (byte)(CONCAT11(CARRY1(bVar1,in_AH),*unaff_RDI) >> bVar2) | *unaff_RDI << 9 - bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

