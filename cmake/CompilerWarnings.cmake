# 给某个target添加编译警告选项
function(set_project_warnings target_name)
    target_compile_options(${target_name} PRIVATE
    -Wall # 开启常见警告
    -Wextra # 额外警告
    -Wpedantic # 严格遵循标准
    -Wshadow # 变量名遮蔽警告
    )
endfunction()