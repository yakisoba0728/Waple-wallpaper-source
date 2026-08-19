// Function: FUN_1404d2350
// Addr: 1404d2350
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2350(char param_1,undefined8 param_2)

{
  byte *pbVar1;
  char cVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  char *pcVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined6 uVar6;
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  uVar6 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  uVar4 = (undefined1)param_2;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *(char *)(unaff_RBX + -0x7485ffc4) = *(char *)(unaff_RBX + -0x7485ffc4) + param_1;
  *unaff_RDI = *unaff_RSI;
  pcVar3 = (char *)func_0x0001486e23ab();
  cVar2 = *pcVar3;
  pbVar1 = (byte *)(CONCAT62(uVar6,CONCAT11(bVar5,uVar4)) + CONCAT62(uVar6,CONCAT11(bVar5,uVar4)));
  *pbVar1 = *pbVar1 | bVar5;
  pcVar3 = (char *)(CONCAT44((int)((ulonglong)pcVar3 >> 0x20),
                             CONCAT31((int3)((ulonglong)pcVar3 >> 8),(char)pcVar3 + cVar2)) +
                   -0x1dffbfb5);
  *pcVar3 = *pcVar3 + bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

