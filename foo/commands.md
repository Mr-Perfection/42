grep -rl '*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        *' . | xargs s
ed -i '' 's/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */*   By: slee <marvin@42.fr>
                 +#+  +:+       +#+        /g'


grep -rl '   Created: 2014/11/28 13:53:21 by tfleming          #+#    #+#             ' . | xargs sed -i '' 's/   Created: 2014/11/28 13:53:21 by tfleming          #+#    #+#             /   Created: 2017/02/21 20:50:28 by slee              #+#    #+#             /g'

sed -i '' 's/11/5/g' ./*.c


grep -rl 'By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        ' . | xargs sed -i '' 's/By: tfleming/By: slee     /g'
grep -rl 'By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        ' . | xargs sed -i '' 's/By: slee     /By: slee    /g'

grep -rl 'By: slee      <tfleming@student.42.fr>          +#+  +:+       +#+        ' . | xargs sed -i '' 's/tfleming@student/slee@student/g'
grep -rl 'By: slee      <tfleming@student.42.fr>          +#+  +:+       +#+        ' . | xargs sed -i '' 's/tfleming@student/slee@student/g'
grep -rl 'By: slee      <slee@student.42.fr>' . | xargs sed -i '' 's/42.fr>/42.fr>   /g'
grep -rl 'By: slee      <slee@student.42.fr>' . | xargs sed -i '' 's/      <slee@student.42.fr>/<slee@student.42.fr>      /g'
grep -rl 'By: slee<slee@student.42.fr> ' . | xargs sed -i '' 's/By: slee<slee@student.42.fr> /By: slee <slee@student.42.fr>/g'
grep -rl 'Created: 2014' . |  xargs sed -i '' 's/2014/2016/g'
grep -rl 'Updated: 2015' . |  xargs sed -i '' 's/2015/2017/g'
grep -rl 'by tfleming' . | xargs sed -i '' 's/tfleming/slee     /g'
grep -rl 'slee  ' . | xargs sed -i '' 's/slee  /slee /g'