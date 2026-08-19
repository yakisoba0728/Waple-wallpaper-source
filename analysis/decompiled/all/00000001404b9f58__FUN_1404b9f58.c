// Function: FUN_1404b9f58
// Addr: 1404b9f58
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9f58(longlong param_1,char *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int in_EAX;
  undefined4 in_register_00000004;
  byte bVar4;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  undefined1 *unaff_RDI;
  char *unaff_R15;
  bool in_CF;
  bool bVar5;
  
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  bVar3 = (byte)in_EAX;
  bVar5 = false;
  if (in_CF) {
    bVar2 = *param_4;
    *param_4 = *param_4 + bVar3;
    if (CARRY1(bVar2,bVar3)) {
      *unaff_RDI = unaff_BL;
      *param_2 = *param_2 + bVar4;
      if (-1 < *param_2) {
        *(char *)CONCAT71(unaff_00000019,unaff_BL) =
             *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)((ulonglong)param_1 >> 8);
        *unaff_R15 = *unaff_R15 + (char)param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(int *)CONCAT71(unaff_00000019,unaff_BL) =
           *(int *)CONCAT71(unaff_00000019,unaff_BL) + (int)&stack0x00000000;
      *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar1 = (byte *)(param_2 + -8);
    bVar5 = CARRY1(*pbVar1,bVar4);
    *pbVar1 = *pbVar1 + bVar4;
  }
  bVar4 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  bVar2 = *(char *)CONCAT44(in_register_00000004,in_EAX) - bVar3;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) = bVar2 - bVar5;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       (*(int *)CONCAT44(in_register_00000004,in_EAX) - in_EAX) -
       (uint)(bVar4 < bVar3 || bVar2 < bVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

