// Function: FUN_1404aca90
// Addr: 1404aca90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aca90(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  char cVar3;
  char in_AL;
  byte bVar4;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar5;
  undefined4 uVar7;
  longlong unaff_RSI;
  uint uVar6;
  
  uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
  bVar5 = (byte)param_2 | *(byte *)(param_2 + 0x60057006);
  uVar6 = CONCAT31((int3)((ulonglong)param_2 >> 8),bVar5);
  bVar4 = in_AL + 0x30;
  puVar1 = (uint *)(CONCAT44(uVar7,uVar6) + param_1);
  *puVar1 = *puVar1 & uVar6;
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + bVar5;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4)))
       | bVar4;
  cVar3 = in_AH * '\x02';
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4)))
       | CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4));
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4))) |
           0xd4) =
       *(int *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4)))
               | 0xd4) + (CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4)) | 0xd4);
  uVar2 = LocalDescriptorTableRegister();
  *(undefined4 *)(&stack0x00000000 + CONCAT44(uVar7,uVar6) * 2) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

