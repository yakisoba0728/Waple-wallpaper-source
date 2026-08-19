// Function: FUN_1404b27e0
// Addr: 1404b27e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b27e0(char param_1,longlong param_2,char param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint in_EAX;
  undefined3 uVar6;
  undefined4 in_register_00000004;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  longlong unaff_RDI;
  undefined4 uVar5;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar2 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  bVar3 = (byte)in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar3;
  *(int *)(unaff_RDI + param_2) = *(int *)(unaff_RDI + param_2) + (uint)CARRY1(bVar2,bVar3);
  uVar6 = (undefined3)(in_EAX >> 8);
  cVar4 = bVar3 + param_1;
  uVar5 = CONCAT31(uVar6,cVar4);
  *param_4 = *param_4 + unaff_SPL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar5) + CONCAT44(in_register_00000004,uVar5));
  *pcVar1 = *pcVar1 + cVar4;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar5) + -0x77ffffb5);
  *pcVar1 = *pcVar1 + unaff_BL;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x48001714);
  *pcVar1 = *pcVar1 + param_3;
  cVar4 = cVar4 + param_1;
  uVar5 = CONCAT31(uVar6,cVar4);
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,uVar5) =
       *(char *)CONCAT44(in_register_00000004,uVar5) + cVar4;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar5) + 0x14);
  *pcVar1 = *pcVar1 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

