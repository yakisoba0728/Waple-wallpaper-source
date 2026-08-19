// Function: FUN_1404c3ffc
// Addr: 1404c3ffc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3ffc(undefined8 param_1,char param_2)

{
  longlong in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  int unaff_ESI;
  char *unaff_RDI;
  byte in_CF;
  
  *(int *)(in_RAX + 0x19) =
       (*(int *)(in_RAX + 0x19) - unaff_ESI) -
       (uint)((uint)&stack0x00000000 < (uint)in_RAX ||
             (uint)&stack0x00000000 - (uint)in_RAX < (uint)in_CF);
  *unaff_RDI = *unaff_RDI + unaff_BL;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

