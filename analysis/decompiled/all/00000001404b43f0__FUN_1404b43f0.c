// Function: FUN_1404b43f0
// Addr: 1404b43f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b43f0(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  uint uVar2;
  longlong in_RAX;
  int *piVar3;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EBP;
  longlong unaff_RSI;
  byte unaff_retaddr;
  
  *(uint *)(unaff_RSI + in_RAX) = *(uint *)(unaff_RSI + in_RAX) & unaff_EBP;
  piVar3 = (int *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),
                            (char)in_RAX - CARRY1(unaff_retaddr,(byte)((ulonglong)param_1 >> 8))) &
                  0xffffffffffffff74);
  uVar2 = (int)piVar3 - *piVar3;
  pbVar1 = (byte *)(param_2 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *pbVar1 = *pbVar1 | (byte)(uVar2 >> 8);
  *(char *)(ulonglong)uVar2 = (*(char *)(ulonglong)uVar2 - (char)uVar2) - (unaff_BH < '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

