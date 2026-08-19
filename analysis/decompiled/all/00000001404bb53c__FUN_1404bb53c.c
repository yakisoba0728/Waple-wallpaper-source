// Function: FUN_1404bb53c
// Addr: 1404bb53c
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404bb552) overlaps instruction at (ram,0x0001404bb550)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404bb5b4) */

void FUN_1404bb53c(undefined8 param_1,undefined8 param_2)

{
  uint *in_RAX;
  uint *puVar1;
  byte bVar2;
  char *unaff_RBX;
  byte *unaff_RDI;
  
  *unaff_RBX = *unaff_RBX + (char)param_2;
  bVar2 = (byte)param_1 ^ *unaff_RDI;
  if (CONCAT71((int7)((ulonglong)param_1 >> 8),bVar2) == 1 || bVar2 == 0) {
    *unaff_RBX = *unaff_RBX;
    *in_RAX = *in_RAX & (uint)&stack0x00000000;
    puVar1 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                              CONCAT11((byte)((ulonglong)in_RAX >> 8) &
                                       (byte)((ulonglong)param_2 >> 8),(byte)in_RAX));
    *puVar1 = *puVar1 | (uint)puVar1;
    in_RAX = (uint *)(ulonglong)((uint)puVar1 + 0x70000854);
  }
  else {
    *(byte *)in_RAX = (byte)*in_RAX | (byte)in_RAX;
  }
  *in_RAX = *in_RAX & (uint)in_RAX;
  return;
}

