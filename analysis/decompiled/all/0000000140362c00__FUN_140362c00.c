// Function: FUN_140362c00
// Addr: 140362c00
// Size: 416 bytes


undefined2 * FUN_140362c00(undefined2 *param_1,undefined2 *param_2,undefined8 *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  
  if (param_1 != param_2) {
    for (puVar8 = param_1 + 1; puVar8 != param_2; puVar8 = puVar8 + 1) {
      uVar1 = *puVar8;
      lVar5 = FUN_1403c03e0(*param_3,local_68,*param_1);
      lVar6 = FUN_1403c03e0(*param_3,local_50,uVar1);
      uVar3 = *(uint *)(lVar6 + 0x10);
      if (uVar3 == *(uint *)(lVar5 + 0x10)) {
        if (uVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = memcmp(*(void **)(lVar5 + 8),*(void **)(lVar6 + 8),(ulonglong)uVar3);
        }
      }
      else {
        iVar4 = *(uint *)(lVar5 + 0x10) - uVar3;
      }
      puVar7 = puVar8;
      if (iVar4 < 1) {
        while( true ) {
          uVar2 = puVar7[-1];
          lVar5 = FUN_1403c03e0(*param_3,local_50,uVar2);
          lVar6 = FUN_1403c03e0(*param_3,local_68,uVar1);
          uVar3 = *(uint *)(lVar6 + 0x10);
          if (uVar3 == *(uint *)(lVar5 + 0x10)) {
            if (uVar3 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = memcmp(*(void **)(lVar5 + 8),*(void **)(lVar6 + 8),(ulonglong)uVar3);
            }
          }
          else {
            iVar4 = *(uint *)(lVar5 + 0x10) - uVar3;
          }
          if (iVar4 < 1) break;
          *puVar7 = uVar2;
          puVar7 = puVar7 + -1;
        }
        *puVar7 = uVar1;
      }
      else {
        FUN_1404210f0(param_1 + 1,param_1,(longlong)puVar8 - (longlong)param_1);
        *param_1 = uVar1;
      }
    }
    return param_2;
  }
  return param_2;
}

