// Function: FUN_1404bffb4
// Addr: 1404bffb4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bffb4(char param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  undefined1 uVar3;
  undefined6 uVar4;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar3 = (undefined1)param_2;
  *param_4 = *param_4 + unaff_SPL;
  cVar2 = (char)in_EAX;
  *(char *)CONCAT62(uVar4,CONCAT11(unaff_BH,uVar3)) =
       *(char *)CONCAT62(uVar4,CONCAT11(unaff_BH,uVar3)) + cVar2;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar2;
  pcVar1 = (char *)(CONCAT62(uVar4,CONCAT11(unaff_BH,uVar3)) + 0x580027ed);
  *pcVar1 = *pcVar1 + param_1;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -1;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

