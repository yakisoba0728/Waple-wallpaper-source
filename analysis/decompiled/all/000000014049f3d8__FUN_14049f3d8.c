// Function: FUN_14049f3d8
// Addr: 14049f3d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049f3ec) overlaps instruction at (ram,0x00014049f3eb)
    */

void FUN_14049f3d8(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  char *in_RAX;
  char unaff_BL;
  char unaff_SPL;
  
  *param_4 = *param_4 + unaff_SPL;
  cVar2 = (char)in_RAX;
  *param_2 = *param_2 + cVar2;
  *in_RAX = *in_RAX + cVar2;
  if (*in_RAX != '\0') {
    pcVar1 = in_RAX + -0x30fffe8c;
    *pcVar1 = *pcVar1 + cVar2;
    if (*pcVar1 == '\0') {
      *param_4 = *param_4 + cVar2;
    }
    else {
      in_RAX = (char *)(ulonglong)(byte)(cVar2 + unaff_BL);
    }
  }
  *param_4 = *param_4 + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

