// Function: FUN_1404a8608
// Addr: 1404a8608
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8608(undefined8 param_1)

{
  char *pcVar1;
  uint uVar2;
  uint *in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  char *unaff_RDI;
  char in_CF;
  
  *(char *)(unaff_RBP + 0x21004a) = *(char *)(unaff_RBP + 0x21004a) + (char)in_RAX + in_CF;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(byte *)((longlong)in_RAX + 0xb) =
       *(byte *)((longlong)in_RAX + 0xb) & (byte)((ulonglong)param_1 >> 8);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x68);
  *pcVar1 = *pcVar1 + unaff_BH;
  uVar2 = (uint)in_RAX | *in_RAX;
  *(char *)(unaff_RBP + 0xf01004a) = *(char *)(unaff_RBP + 0xf01004a) + (byte)uVar2;
  *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 | (byte)uVar2;
  *unaff_RDI = *unaff_RDI + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

