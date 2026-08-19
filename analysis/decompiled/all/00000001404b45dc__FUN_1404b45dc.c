// Function: FUN_1404b45dc
// Addr: 1404b45dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b45dc(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint in_EAX;
  undefined4 in_register_00000004;
  char unaff_BH;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  byte in_CF;
  
  out(*unaff_RSI,param_2);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       (*(int *)CONCAT44(in_register_00000004,in_EAX) - in_EAX) - (uint)in_CF;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + 0x2b);
  *pcVar1 = *pcVar1 + unaff_BH;
  bVar2 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (byte)in_EAX;
  uVar5 = (uint)CARRY1(bVar2,(byte)in_EAX);
  uVar3 = *(uint *)CONCAT44(in_register_00000004,in_EAX);
  uVar6 = *(int *)CONCAT44(in_register_00000004,in_EAX) - in_EAX;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) = uVar6 - uVar5;
  uVar4 = in(param_2);
  *unaff_RDI = uVar4;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       (*(int *)CONCAT44(in_register_00000004,in_EAX) - in_EAX) -
       (uint)(uVar3 < in_EAX || uVar6 < uVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

