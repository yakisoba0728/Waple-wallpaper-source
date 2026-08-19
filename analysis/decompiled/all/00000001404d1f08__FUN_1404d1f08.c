// Function: FUN_1404d1f08
// Addr: 1404d1f08
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1f08(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined4 in_EAX;
  undefined3 uVar5;
  uint uVar4;
  undefined4 in_register_00000004;
  char unaff_BL;
  longlong unaff_RSI;
  char unaff_R12B;
  
  uVar5 = (undefined3)((uint)in_EAX >> 8);
  cVar3 = (byte)in_EAX + 0x34;
  cVar3 = cVar3 + *(char *)CONCAT44(in_register_00000004,CONCAT31(uVar5,cVar3)) +
          (0xcb < (byte)in_EAX);
  uVar4 = CONCAT31(uVar5,cVar3);
  pcVar2 = (char *)(unaff_RSI + 4);
  *pcVar2 = (*pcVar2 - unaff_BL) - (*(uint *)CONCAT44(in_register_00000004,uVar4) < uVar4);
  *param_4 = *param_4 + unaff_R12B;
  *(char *)CONCAT44(in_register_00000004,uVar4) =
       *(char *)CONCAT44(in_register_00000004,uVar4) + cVar3;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar4) + -0x58ffc665);
  *pcVar1 = *pcVar1 + param_2;
  *pcVar2 = (*pcVar2 - unaff_BL) - (*(uint *)CONCAT44(in_register_00000004,uVar4) < uVar4);
  *param_4 = *param_4 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

