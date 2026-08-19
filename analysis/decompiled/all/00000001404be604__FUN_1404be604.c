// Function: FUN_1404be604
// Addr: 1404be604
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be604(char *param_1,byte param_2)

{
  undefined4 uVar1;
  longlong in_RAX;
  char *pcVar2;
  char unaff_BL;
  longlong unaff_RBP;
  
  pcVar2 = (char *)(in_RAX + unaff_RBP * 2);
  *pcVar2 = *pcVar2 + (char)in_RAX;
  pcVar2 = (char *)(ulonglong)
                   (((uint)CONCAT61((int6)((ulonglong)in_RAX >> 0x10),
                                    (byte)((ulonglong)in_RAX >> 8) & param_2) & 0x25d451) << 8);
  *pcVar2 = *pcVar2 + unaff_BL;
  uVar1 = in(0x4b);
  *param_1 = *param_1 + (char)((uint)uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

