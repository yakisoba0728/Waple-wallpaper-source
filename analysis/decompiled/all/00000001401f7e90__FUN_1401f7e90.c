// Function: FUN_1401f7e90
// Addr: 1401f7e90
// Size: 437 bytes


void FUN_1401f7e90(char *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 local_58 [8];
  uint local_50;
  
  puVar4 = DAT_1404e9748;
  if (DAT_1404e9740 != DAT_1404e9748) {
    cVar1 = *param_1;
    puVar6 = DAT_1404e9740;
    do {
      if (*(char *)(puVar6 + 4) == cVar1) {
        uVar8 = *(uint *)(puVar6 + 2);
        uVar9 = (ulonglong)uVar8;
        local_50 = CONCAT31(local_50._1_3_,4);
        puVar7 = puVar6;
        if (0xf < (ulonglong)puVar6[3]) {
          puVar7 = (undefined8 *)*puVar6;
        }
        puVar5 = (uint *)_malloc_base(uVar9 + 5);
        if (puVar5 == (uint *)0x0) {
          FUN_140017170(local_58,
                        "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                       );
                    /* WARNING: Subroutine does not return */
          FUN_140084bc0(local_58);
        }
        *puVar5 = uVar8;
        uVar8 = local_50 | 0x100;
        FUN_1404210f0(puVar5 + 1,puVar7,uVar9);
        *(undefined1 *)(uVar9 + 4 + (longlong)puVar5) = 0;
        local_50 = *(uint *)(param_2 + 1);
        *(uint *)(param_2 + 1) = uVar8;
        lVar2 = *param_2;
        *param_2 = (longlong)puVar5;
        lVar3 = param_2[2];
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        switch(local_50 & 0xff) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 5:
          break;
        case 4:
          if ((local_50 >> 8 & 1) != 0) {
            thunk_FUN_1402d9040(lVar2);
          }
          break;
        case 6:
        case 7:
          if (lVar2 != 0) {
            FUN_140088e40(lVar2);
            thunk_FUN_14028af80(lVar2,0x10);
          }
          break;
        default:
          FID_conflict__assert
                    (L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
        }
        if (lVar3 != 0) {
          FUN_140017240(lVar3 + 0x40);
          FUN_140017240(lVar3 + 0x20);
          FUN_140017240(lVar3);
          thunk_FUN_14028af80(lVar3,0x60);
        }
      }
      puVar6 = puVar6 + 5;
    } while (puVar6 != puVar4);
  }
  return;
}

