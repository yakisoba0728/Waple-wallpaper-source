// Function: FUN_1404caaf4
// Addr: 1404caaf4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cab0b) overlaps instruction at (ram,0x0001404cab0a)
    */

void FUN_1404caaf4(char *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  uint *in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  char unaff_R12B;
  bool in_ZF;
  undefined8 uStack_8;
  uint *puVar3;
  
  if (in_ZF) {
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  }
  else {
    uVar2 = (uint)in_RAX ^ *in_RAX;
    cVar1 = (char)uVar2 + -0x56;
    uVar2 = CONCAT31((int3)(uVar2 >> 8),cVar1);
    puVar3 = (uint *)(ulonglong)uVar2;
    *param_1 = *param_1 + unaff_R12B;
    *(char *)puVar3 = (char)*puVar3 + cVar1;
    *(char *)((longlong)puVar3 + 0x15) = *(char *)((longlong)puVar3 + 0x15) + (char)param_2;
    if (uVar2 == *puVar3) {
      cRam0000000000000000 = cRam0000000000000000 + unaff_BH;
      *param_1 = *param_1;
      cRam0000000000000000 = cRam0000000000000000 + (char)((ulonglong)param_2 >> 8);
      *(undefined1 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
           *(undefined1 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
      uStack_8 = param_2;
      *(undefined1 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
           *(undefined1 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
      *param_1 = *param_1;
      *(char *)((longlong)&uStack_8 + unaff_RSI) =
           *(char *)((longlong)&uStack_8 + unaff_RSI) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

