// Function: FUN_1404bab34
// Addr: 1404bab34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bab34(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 *param_4)

{
  byte bVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RDI;
  undefined4 uVar2;
  
  bVar1 = (char)in_EAX + 0x56;
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  *param_4 = *param_4;
  *(byte *)CONCAT44(in_register_00000004,uVar2) =
       *(char *)CONCAT44(in_register_00000004,uVar2) + bVar1;
  *(char *)(unaff_RDI + -5) = *(char *)(unaff_RDI + -5) + (char)param_2;
  *(byte *)CONCAT44(in_register_00000004,uVar2) =
       *(byte *)CONCAT44(in_register_00000004,uVar2) & bVar1;
  *param_4 = *param_4;
  *(byte *)CONCAT44(in_register_00000004,uVar2) =
       *(char *)CONCAT44(in_register_00000004,uVar2) + bVar1;
  *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       (char)((uint)param_2 >> 8);
  *(byte *)CONCAT44(in_register_00000004,uVar2) =
       *(byte *)CONCAT44(in_register_00000004,uVar2) & bVar1;
  *(byte *)CONCAT44(in_register_00000004,uVar2) =
       *(byte *)CONCAT44(in_register_00000004,uVar2) & bVar1;
  *(byte *)CONCAT44(in_register_00000004,uVar2) =
       *(char *)CONCAT44(in_register_00000004,uVar2) + bVar1;
  *(byte *)CONCAT44(in_register_00000004,uVar2) =
       *(byte *)CONCAT44(in_register_00000004,uVar2) & bVar1;
  *(byte *)CONCAT44(in_register_00000004,uVar2) =
       *(byte *)CONCAT44(in_register_00000004,uVar2) & bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

