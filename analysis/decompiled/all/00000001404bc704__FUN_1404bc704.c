// Function: FUN_1404bc704
// Addr: 1404bc704
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc704(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 in_RAX;
  int *piVar3;
  longlong unaff_RBP;
  uint unaff_ESI;
  byte *unaff_RDI;
  byte in_CF;
  
  bVar2 = (byte)in_RAX + 1;
  piVar3 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2 + in_CF);
  *piVar3 = *piVar3 + (uint)piVar3 + (uint)(0xfe < (byte)in_RAX || CARRY1(bVar2,in_CF));
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  cVar1 = *(char *)(ulonglong)((uint)piVar3 | 0x9e00bf0);
  *(uint *)(unaff_RBP + 4) = *(uint *)(unaff_RBP + 4) & unaff_ESI;
  *(char *)(unaff_RBP + 0x78) =
       *(char *)(unaff_RBP + 0x78) + (char)((ulonglong)param_2 >> 8) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

