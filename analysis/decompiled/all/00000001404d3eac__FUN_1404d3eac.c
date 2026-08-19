// Function: FUN_1404d3eac
// Addr: 1404d3eac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d3ed8) overlaps instruction at (ram,0x0001404d3ed7)
    */
/* WARNING: Removing unreachable block (ram,0x0001404d3ed7) */

void FUN_1404d3eac(char *param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  longlong in_RAX;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  uint *unaff_RSI;
  byte *unaff_RDI;
  char unaff_R13B;
  char *pcVar3;
  
  *(char *)(unaff_RBP + -0x1affb30c) =
       *(char *)(unaff_RBP + -0x1affb30c) - (char)((ulonglong)param_1 >> 8);
  pcVar3 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                             CONCAT11((char)((ulonglong)param_2 >> 8) +
                                      *(char *)(in_RAX * 2 + 0x2e040235),(char)param_2)) + -0x14 +
                   in_RAX);
  *pcVar3 = *pcVar3 + unaff_BH;
  (&stack0x00000000)[in_RAX] = (&stack0x00000000)[in_RAX] + unaff_BH;
  *param_1 = *param_1 + unaff_BL;
  uVar2 = (uint)in_RAX | *unaff_RSI;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)param_1;
  bVar1 = (byte)uVar2 ^ *unaff_RDI;
  pcVar3 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar1);
  if (param_1 == (char *)0x1 || bVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar3 = *pcVar3 + (char)param_2;
  *(char *)(param_3 + 0x31) = *(char *)(param_3 + 0x31) + unaff_R13B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

