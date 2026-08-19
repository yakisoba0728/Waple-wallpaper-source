// Function: FUN_1404b72a8
// Addr: 1404b72a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b72a8(char *param_1,byte *param_2)

{
  char *pcVar1;
  int *piVar2;
  uint uVar3;
  undefined1 *in_RAX;
  char cVar4;
  int unaff_ESP;
  byte in_CF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  if (in_ZF || in_OF != in_SF) {
    uVar3 = ((int)in_RAX + -0x4b717c00) - (uint)in_CF;
    *param_1 = *param_1 + (char)uVar3;
    pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar4,0xb)) + 0x1c002e64)
    ;
    *pcVar1 = *pcVar1 + cVar4;
    piVar2 = (int *)((ulonglong)uVar3 * 2);
    *piVar2 = *piVar2 + unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 >> 1 | *param_2 << 7;
  *in_RAX = *in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

