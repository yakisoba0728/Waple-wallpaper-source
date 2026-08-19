// Function: FUN_1404c7224
// Addr: 1404c7224
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c7225) overlaps instruction at (ram,0x0001404c7224)
    */

void FUN_1404c7224(char *param_1)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  uint in_EAX;
  undefined4 in_register_00000004;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_R12B;
  undefined4 uVar5;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar2 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  bVar4 = (byte)in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar4;
  if ((POPCOUNT(*(undefined1 *)CONCAT44(in_register_00000004,in_EAX)) & 1U) != 0) {
    cVar3 = (bVar4 + 0x8f) - CARRY1(bVar2,bVar4);
    uVar5 = CONCAT31((int3)(in_EAX >> 8),cVar3);
    *param_1 = *param_1 + unaff_R12B;
    *(char *)CONCAT44(in_register_00000004,uVar5) =
         *(char *)CONCAT44(in_register_00000004,uVar5) + cVar3;
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -10);
    *pcVar1 = *pcVar1 + unaff_BH;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

