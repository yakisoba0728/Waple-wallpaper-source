// Function: FUN_1404ab2cc
// Addr: 1404ab2cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ab2cd) overlaps instruction at (ram,0x0001404ab2cc)
    */

void FUN_1404ab2cc(char *param_1,byte *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  ushort uVar4;
  byte in_AL;
  char cVar6;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar7;
  longlong in_FS_OFFSET;
  undefined3 uVar5;
  
  while( true ) {
    *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) & (uint)param_1;
    cVar6 = in_AL + *(char *)CONCAT44(in_register_00000004,
                                      CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
    pbVar1 = param_2 + CONCAT44(in_register_00000004,
                                CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar6)));
    *pbVar1 = *pbVar1 | in_AH;
    param_1 = param_1 + -1;
    if (param_1 == (char *)0x0 || *pbVar1 == 0) break;
    *param_1 = *param_1 + cVar6;
    uVar5 = SegmentLimit(*(undefined4 *)
                          CONCAT44(in_register_00000004,
                                   CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar6))));
    uVar4 = (ushort)uVar5;
    in_AL = (byte)uVar5;
    in_AH = (byte)((uint3)uVar5 >> 8);
    in_register_00000002 = 0;
    GlobalDescriptorTableRegister(*(undefined8 *)param_2);
    bVar7 = (byte)param_1;
    *(byte *)CONCAT44(in_register_00000004,(uint)uVar4) =
         *(char *)CONCAT44(in_register_00000004,(uint)uVar4) + bVar7;
    *(byte *)CONCAT44(in_register_00000004,(uint)uVar4) =
         *(byte *)CONCAT44(in_register_00000004,(uint)uVar4) ^ in_AL;
    *param_1 = *param_1 + in_AH;
    *param_2 = *param_2 | in_AL;
    bVar3 = *(byte *)CONCAT44(in_register_00000004,(uint)uVar4);
    *(byte *)CONCAT44(in_register_00000004,(uint)uVar4) =
         *(char *)CONCAT44(in_register_00000004,(uint)uVar4) + bVar7;
    pcVar2 = (char *)(in_FS_OFFSET + CONCAT44(in_register_00000004,(uint)uVar4));
    *pcVar2 = *pcVar2 + in_AL + CARRY1(bVar3,bVar7);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

