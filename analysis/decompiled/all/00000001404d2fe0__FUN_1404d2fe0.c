// Function: FUN_1404d2fe0
// Addr: 1404d2fe0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2fe0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  uint *in_RAX;
  byte *unaff_RBX;
  uint unaff_EDI;
  
  *unaff_RBX = *unaff_RBX ^ (byte)((ulonglong)param_1 >> 8);
  cVar1 = (char)in_RAX;
  *(char *)(param_3 + 0x210049e1) = *(char *)(param_3 + 0x210049e1) + cVar1;
  *(uint *)((longlong)in_RAX * 2) = *(uint *)((longlong)in_RAX * 2) | (uint)in_RAX;
  *in_RAX = *in_RAX | unaff_EDI;
  cRam00000001704d315d = cRam00000001704d315d + cVar1;
  *(char *)((longlong)in_RAX + 0x210049e1) = *(char *)((longlong)in_RAX + 0x210049e1) + cVar1;
  *(char *)in_RAX = (char)*in_RAX + cVar1;
  *(char *)in_RAX = (char)*in_RAX + (char)((ulonglong)param_2 >> 8);
  *(char *)((longlong)in_RAX + 0x10049e1) = *(char *)((longlong)in_RAX + 0x10049e1) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

