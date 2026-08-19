// Function: FUN_1404bba38
// Addr: 1404bba38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bba38(undefined8 param_1,char *param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  undefined4 in_register_00000004;
  char *unaff_RBX;
  longlong unaff_RDI;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  uVar3 = CONCAT31((int3)(in_EAX >> 8),0x97);
  *(uint *)CONCAT44(in_register_00000004,uVar3) =
       *(uint *)CONCAT44(in_register_00000004,uVar3) & uVar3;
  *(int *)(unaff_RDI + -0x46cbffdf) = *(int *)(unaff_RDI + -0x46cbffdf) << 1;
  bVar1 = *param_4;
  *param_4 = *param_4 + 0x97;
  cVar2 = *unaff_RBX;
  *param_2 = *param_2 + (char)param_2;
  cRam1f210000300cd00e = cVar2 + -0x69 + (0x68 < bVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

